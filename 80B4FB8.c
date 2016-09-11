int ResetBerryTreeSparkleFlags()
{
  unsigned int v0; // r10@1
  signed int v1; // r9@1
  int *v2; // r4@1
  signed int v3; // r8@1
  signed int v4; // r7@1
  signed int v5; // r6@1
  signed __int16 v6; // r0@4
  __int16 v8; // [sp+0h] [bp-24h]@1
  unsigned __int16 v9; // [sp+2h] [bp-22h]@1
  int v10; // [sp+20h] [bp-4h]@10

  GetCameraCoords(&v8, &v9);
  v0 = ((((unsigned int)v9 + 3) << 16) + 0x80000) >> 16;
  v1 = v8;
  v2 = dword_30048A0;
  v3 = (signed __int16)(v8 + 14);
  v4 = (signed __int16)(v9 + 3);
  v5 = 15;
  do
  {
    if ( *(_BYTE *)v2 << 31 )
    {
      if ( *((_BYTE *)v2 + 6) == 12 )
      {
        v8 = *((_WORD *)v2 + 8);
        v6 = *((_WORD *)v2 + 9);
        v9 = *((_WORD *)v2 + 9);
        if ( v1 <= v8 && v8 <= v3 && v4 <= v6 && v6 <= (signed __int16)v0 )
          ResetBerryTreeSparkleFlag(*((_BYTE *)v2 + 29));
      }
    }
    v2 += 9;
    --v5;
  }
  while ( v5 >= 0 );
  return v10;
}
