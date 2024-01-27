package;

import flixel.FlxG;
import flixel.group.FlxGroup.FlxTypedGroup;

class EnemyGroup extends FlxTypedGroup<Enemy>
{
	var maxEnemies:Int;

	public function new(?max:Int = 30)
	{
		super(max);
		maxEnemies = max;

		addEnemyPool();
	}

	function addEnemyPool()
	{
		for (i in 0...maxEnemies)
		{
			var enemy = new Enemy();
			enemy.kill();
			add(enemy);
		}
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);
		enemyGun();
	}

	var tickerSize:Int = 60 * 0; // 5 seconds
	var ticker:Int = 0;

	function enemyGun()
	{
		FlxG.watch.addQuick("tickerEnemy", ticker);
		if (ticker == 0)
		{
			var enemy = this.recycle();
			enemy.setPosition(FlxG.random.int(100, 500), FlxG.random.int(50, 85));

			ticker = tickerSize;
		}
		else
		{
			ticker--;
		}
	}
}
