int __fastcall sub_8059D60(int a1)
{
  int v1; // r5@1
  int v2; // r8@1
  int v3; // r6@1
  __int16 v5; // [sp+0h] [bp-20h]@1
  __int16 v6; // [sp+2h] [bp-1Eh]@4
  int v7; // [sp+1Ch] [bp-4h]@7

  v1 = a1;
  v2 = *(_BYTE *)(a1 + 30);
  v5 = 0;
  v3 = 1;
  do
  {
    if ( call_via_r1(v2, *(&gUnknown_0830FC78 + v5)) << 24 && v3 == (unsigned int)*(_BYTE *)(v1 + 24) >> 4 )
    {
      v5 = *(_WORD *)(v1 + 16);
      v6 = *(_WORD *)(v1 + 18);
      MoveCoords(v3, &v5, &v6);
      sub_8126BC4(*(_BYTE *)(v1 + 27), v3, v5, v6);
      return v7;
    }
    ++v5;
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v5 <= 3 );
  objid_set_invisible(*(_BYTE *)(v1 + 27));
  return v7;
}
