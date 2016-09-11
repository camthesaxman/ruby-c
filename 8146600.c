int __fastcall sub_8146600(int a1)
{
  char *v1; // r4@1
  unsigned int v2; // r2@1
  int v3; // r1@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = GetBerryInfo((unsigned int)((a1 << 24) + 0x1000000) >> 24);
  v2 = 0;
  do
  {
    v3 = *(_WORD *)(2 * v2 + 0x203932E) | 0xFFFF;
    *(_WORD *)(2 * v2 + 0x203932E) = -1;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 4 );
  if ( v1[21] )
  {
    v203932E = sub_80A7E5C(48);
    v203932E = v203932E;
  }
  if ( v1[22] )
  {
    v2039330 = sub_80A7E5C(88);
    v2039330 = v2039330;
  }
  if ( v1[23] )
  {
    v2039332 = sub_80A7E5C(128);
    v2039332 = v2039332;
  }
  if ( v1[24] )
  {
    v2039334 = sub_80A7E5C(168);
    v2039334 = v2039334;
  }
  if ( v1[25] )
  {
    v2039336 = sub_80A7E5C(208);
    v2039336 = v2039336;
  }
  return v5;
}
