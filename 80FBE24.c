int sub_80FBE24()
{
  int v0; // r3@1
  int v1; // r1@1
  int v2; // r1@3
  int (*v3)(); // r0@3
  int v5; // [sp+0h] [bp-4h]@0

  v0 = v20388CC;
  v1 = *(_DWORD *)(v20388CC + 32);
  if ( v1 )
  {
    if ( *(_BYTE *)(v20388CC + 120) == 1 )
    {
      *(_WORD *)(v1 + 32) = 16 * *(_WORD *)(v20388CC + 116) - 48;
      *(_WORD *)(*(_DWORD *)(v0 + 32) + 34) = 16 * *(_WORD *)(v0 + 118) - 66;
      v2 = *(_DWORD *)(v0 + 32);
      v3 = sub_80FBEA4;
    }
    else
    {
      *(_WORD *)(v1 + 32) = 8 * *(_WORD *)(v20388CC + 116) + 4;
      *(_WORD *)(*(_DWORD *)(v0 + 32) + 34) = 8 * *(_WORD *)(v0 + 118) + 4;
      *(_WORD *)(*(_DWORD *)(v0 + 32) + 36) = 0;
      *(_WORD *)(*(_DWORD *)(v0 + 32) + 38) = 0;
      v2 = *(_DWORD *)(v0 + 32);
      v3 = sub_80FBF34;
    }
    *(_DWORD *)(v2 + 28) = v3;
    *(_BYTE *)(v2 + 62) &= 0xFBu;
  }
  return v5;
}
