signed int __fastcall unref_sub_81250A4(_BYTE *a1, int a2)
{
  _BYTE *v2; // r4@1
  int v3; // r5@1
  int v4; // r2@7
  int v6; // [sp+0h] [bp-2Ch]@4

  v2 = a1;
  v3 = a2;
  while ( (unsigned int)*v2 <= 0xF )
  {
    v4 = *(_DWORD *)v3;
    if ( !*(_DWORD *)v3 )
      return 0;
    *(_DWORD *)&v2[8 * *v2 + 8] = v4;
    v2[8 * *v2 + 12] = *(_BYTE *)(v3 + 4);
    if ( *(_BYTE *)(v3 + 5) )
    {
      sub_800D238();
      LoadPalette((int)&v6, 16 * *v2, 32);
    }
    else
    {
      LoadPalette(v4, 16 * *v2, 32);
    }
    v2[8 * *v2 + 13] = *v2;
    ++*v2;
    v3 += 8;
  }
  return 1;
}
