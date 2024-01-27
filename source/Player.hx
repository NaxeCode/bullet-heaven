package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.util.FlxColor;

class Player extends FlxSprite
{
	public var speed_x:Int = 2500;
	public var speed_y:Int = 2500;

	public var maxVel_x:Int = 500;
	public var maxVel_y:Int = 500;

	public var drag_x:Int = 1200;
	public var drag_y:Int = 1200;

	public var bulletGroup:FlxTypedGroup<Bullet>;

	public function new(?X:Float, ?Y:Float)
	{
		super(X, Y);

		setGraphics();
		setPhysics();
		setGun();
	}

	function setGraphics()
	{
		this.makeGraphic(32, 32, FlxColor.GREEN);
	}

	function setPhysics()
	{
		this.drag.set(drag_x, drag_y);
		this.maxVelocity.set(maxVel_x, maxVel_y);
	}

	function setGun()
	{
		var bulletSpeed = 500;
		var bulletGroupSize = 100;
		bulletGroup = new FlxTypedGroup<Bullet>(bulletGroupSize);

		for (i in 0...bulletGroupSize)
		{
			var bullet = new Bullet(-20, -20);
			bullet.velocity.y = -bulletSpeed;
			bullet.kill();
			bulletGroup.add(bullet);
		}
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);

		movement();
		gun();
	}

	function movement()
	{
		this.acceleration.set(0, 0);

		var LEFT = FlxG.keys.pressed.A || FlxG.keys.pressed.LEFT;
		var RIGHT = FlxG.keys.pressed.D || FlxG.keys.pressed.RIGHT;
		var UP = FlxG.keys.pressed.W || FlxG.keys.pressed.UP;
		var DOWN = FlxG.keys.pressed.S || FlxG.keys.pressed.DOWN;

		if (LEFT)
		{
			this.acceleration.x = -speed_x;
		}
		if (RIGHT)
		{
			this.acceleration.x = speed_x;
		}
		if (UP)
		{
			this.acceleration.y = -speed_y;
		}
		if (DOWN)
		{
			this.acceleration.y = speed_y;
		}
	}

	var tickerSize:Int = 4;
	var ticker:Int = 0;

	function gun()
	{
		FlxG.watch.addQuick("tickerGun", ticker);
		var GUN = FlxG.keys.pressed.SPACE;
		if (GUN && ticker == tickerSize)
		{
			var bullet = bulletGroup.recycle();
			bullet.setPosition(this.x, this.y);
		}

		ticker--;

		if (ticker <= 0)
		{
			ticker = tickerSize; // Reset Ticker
		}
	}
}
