int __fastcall ItemMenu_UseInBattle(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r0@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( itemid_get_battle_function(v203855E) )
  {
    audio_play(5u);
    v2 = itemid_get_battle_function(v203855E);
    call_via_r1(v1, v2);
  }
  return v4;
}
