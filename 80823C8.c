char *__fastcall sub_80823C8(int a1)
{
  int v1; // r5@1
  void *v3; // r0@4
  void *v4; // r0@5

  v1 = a1;
  sub_80822BC();
  v202FF5C = TrainerBattleLoadArg8(v1);
  v202FF5C = v202FF5C;
  if ( (unsigned int)v202FF5C - 1 <= 7 )
  {
    switch ( v202FF5C )
    {
      case 3u:
        TrainerBattleLoadArgs((int)&gUnknown_0839ADE0, v1);
        return (char *)&gUnknown_0819F878;
      case 4u:
        v3 = &gUnknown_0839AD98;
        goto _0808243E;
      case 1u:
      case 2u:
        v4 = &gUnknown_0839AD50;
        goto _080824A6;
      case 6u:
      case 8u:
        v3 = &gUnknown_0839AE28;
_0808243E:
        TrainerBattleLoadArgs((int)v3, v1);
        battle_80801F0();
        return (char *)&gUnknown_0819F840;
      case 7u:
        TrainerBattleLoadArgs((int)&gUnknown_0839AD98, v1);
        battle_80801F0();
        v202FF5E = sub_8082C4C(v202FF5E);
        return gUnknown_0819F8AE;
      case 5u:
        TrainerBattleLoadArgs((int)&gUnknown_0839AD08, v1);
        battle_80801F0();
        v202FF5E = sub_8082C4C(v202FF5E);
        return (char *)&gUnknown_0819F887;
      default:
        break;
    }
  }
  v4 = &gUnknown_0839AD08;
_080824A6:
  TrainerBattleLoadArgs((int)v4, v1);
  battle_80801F0();
  return (char *)&gUnknown_0819F818;
}
