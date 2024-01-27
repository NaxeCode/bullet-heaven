package;

import flixel.FlxSprite;
import flixel.util.FlxColor;

class Enemy extends FlxSprite
{
	public function new()
	{
		super();

		this.makeGraphic(32, 32, FlxColor.RED);
	}

	override function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
