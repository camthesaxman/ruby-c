int sub_80EBC10()
{
  unsigned int v0; // r3@1
  int v1; // r1@2
  int v3; // [sp+10h] [bp-4h]@0

  gKeyRepeatStartDelay = 20;
  v2008828 = calc_player_party_count();
  v2006DDC = 0;
  v2009344 = 0;
  v2008768 = 0;
  v200CED0 = 0;
  v0 = 0;
  do
  {
    *(_BYTE *)(v0 + 33591295) = 0;
    v1 = 4 * v0 + 0x2000000;
    *(_WORD *)(v1 + 36928) = 155;
    *(_WORD *)(v1 + 36930) = 91;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 4 );
  v2006E95 = 0;
  sub_80EBCA8();
  return v3;
}
