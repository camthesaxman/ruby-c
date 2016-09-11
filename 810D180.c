int __fastcall sub_810D180(int a1, int a2, int a3)
{
  int v3; // r2@7
  signed int v4; // r6@9
  signed int v5; // r5@9
  char v7; // [sp+0h] [bp-18h]@13

  sp000_heal_pokemon(a1, a2, a3);
  if ( (unsigned __int8)FlagGet(0x804u) == 1 )
  {
    v2039324 = 1;
  }
  else
  {
    v2039324 = 0;
    FlagSet(0x804u);
  }
  if ( !sub_8053108(1u) )
    sav12_xor_set(1u, (v2024EB2 << 16) | (v2024EB4 << 8) | v2024EB5);
  sub_8047A10();
  if ( v2024EAC )
    sub_80537CC(2u);
  else
    sub_80537CC(1u);
  v4 = 0;
  v5 = 0;
  do
  {
    if ( GetMonData((int)&dword_3004360[25 * v5], 5, v3)
      && !GetMonData((int)&dword_3004360[25 * v5], 6, v3)
      && !GetMonData((int)&dword_3004360[25 * v5], 67, v3) )
    {
      v7 = 1;
      SetMonData((int)&dword_3004360[25 * v5], 67, (int)&v7);
      v4 = 1;
    }
    ++v5;
  }
  while ( v5 <= 5 );
  if ( v4 == 1 )
  {
    sav12_xor_increment(0x2Au);
    FlagSet(0x83Bu);
  }
  SetMainCallback2((int)sub_8141F90);
  return 0;
}
