#pragma once

enum class Item
{
	Weapon,
	Shield,
	Helmet,
	BodyArmor,
	LegArmor,
	Boots,
	Amulet,
	Ring,
	Potion,
};


enum class Enemy
{
	Slime,
	Goblin,
	Orc,
	Troll,
	Harpy,
	Hydra,
	Ent,
	Dragon,
	Skeleton,
	Cockroach,
	Rat,
};

enum class EnemyType
{
	Weak,
	Normal,
	Strong,
	Boss,
};

enum class StatusEffect
{	
	Regen,
	Stun,
	Poison,
	Slow,
	Blind,
};