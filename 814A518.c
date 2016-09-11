int __fastcall sub_814A518(_BYTE *a1, unsigned __int8 a2)
{
  _BYTE *v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r1@1
  int v5; // r0@3
  int v7; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  SkipExtCtrlCodes(a1);
  v4 = (unsigned __int8)StringLength(v2);
  if ( v3 == 252 )
  {
    for ( ; v4 <= 5; v4 = (v4 + 2) & 0xFF )
    {
      v5 = (int)&v2[v4];
      *(_BYTE *)v5 = -4;
      *(_BYTE *)(v5 + 1) = 7;
    }
  }
  else
  {
    while ( v4 <= 5 )
    {
      v2[v4] = v3;
      v4 = (v4 + 1) & 0xFF;
    }
  }
  v2[v4] = -1;
  return v7;
}
