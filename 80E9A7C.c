int __fastcall sub_80E9A7C(int a1, unsigned __int16 a2)
{
  int v2; // r2@1
  int v3; // r7@1
  unsigned int v4; // r5@1
  unsigned int v5; // r4@1
  int v7; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = 2 * a2 & 0xFFFF;
  v5 = 0;
  do
  {
    *(_BYTE *)v2 = -4;
    *(_BYTE *)(v2 + 1) = 18;
    *(_BYTE *)(v2 + 2) = 88 * v5;
    v2 = sub_80EAD64(v2 + 3, *(_BYTE *)(v5 + 2 * v3 + 33558570), 11);
    v4 = (v4 + 1) & 0xFFFF;
    if ( v4 >= v2001028 )
      break;
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 1 );
  return v7;
}
