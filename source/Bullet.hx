package;

import flixel.FlxSprite;
import flixel.util.FlxColor;

class Bullet extends FlxSprite
{
	public function new(X:Int, Y:Int)
	{
		super(X, Y);
		this.makeGraphic(16, 16, FlxColor.CYAN);
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
