package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;

class PlayState extends FlxState
{
	var player:Player;
	var enemyGroup:EnemyGroup;

	override public function create()
	{
		super.create();
		player = new Player();
		player.immovable = true;
		player.screenCenter();
		add(player.bulletGroup);
		add(player);

		enemyGroup = new EnemyGroup();
		add(enemyGroup);
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		FlxG.collide(player, enemyGroup);
	}
}
