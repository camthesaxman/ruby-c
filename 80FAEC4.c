int sub_80FAEC4()
{
  int v0; // r2@1
  int v1; // r3@1
  _WORD *v2; // r0@2
  _WORD *v3; // r3@2
  signed int v4; // r0@2
  signed int v5; // r0@4
  signed int v6; // r0@6
  int v7; // r0@8
  int v9; // [sp+Ch] [bp-4h]@0

  v0 = v20388CC;
  v1 = *(_BYTE *)(v20388CC + 120);
  if ( *(_BYTE *)(v20388CC + 120) )
  {
    *(_DWORD *)(v20388CC + 60) = *(_WORD *)(v20388CC + 92) << 8;
    *(_DWORD *)(v0 + 64) = *(_WORD *)(v0 + 94) << 8;
    *(_WORD *)(v0 + 96) = 0;
    *(_WORD *)(v0 + 98) = 0;
    *(_DWORD *)(v0 + 68) = *(_DWORD *)(v0 + 60) / -16;
    *(_DWORD *)(v0 + 72) = *(_DWORD *)(v0 + 64) / -16;
    *(_WORD *)(v0 + 84) = *(_WORD *)(v0 + 100);
    *(_WORD *)(v0 + 86) = *(_WORD *)(v0 + 102);
    *(_DWORD *)(v0 + 76) = 0x8000;
    v6 = 2048;
  }
  else
  {
    v2 = (_WORD *)(v20388CC + 94);
    *v2 = v1;
    *(v2 - 1) = v1;
    *(_DWORD *)(v0 + 64) = v1;
    *(_DWORD *)(v0 + 60) = v1;
    *(_WORD *)(v0 + 96) = 8 * *(_WORD *)(v0 + 84) - 52;
    v3 = (_WORD *)(v0 + 98);
    *(_WORD *)(v0 + 98) = 8 * *(_WORD *)(v0 + 86) - 68;
    v4 = *(_WORD *)(v0 + 96) << 8;
    if ( *(_WORD *)(v0 + 96) & 0x800000 )
      v4 += 15;
    *(_DWORD *)(v0 + 68) = v4 >> 4;
    v5 = *v3 << 8;
    if ( *v3 & 0x800000 )
      v5 += 15;
    *(_DWORD *)(v0 + 72) = v5 >> 4;
    *(_WORD *)(v0 + 100) = *(_WORD *)(v0 + 84);
    *(_WORD *)(v0 + 102) = *(_WORD *)(v0 + 86);
    *(_DWORD *)(v0 + 76) = 0x10000;
    v6 = -2048;
  }
  *(_DWORD *)(v0 + 80) = v6;
  *(_WORD *)(v20388CC + 110) = 0;
  v7 = sub_80FBCA0();
  sub_80FBDF8(v7);
  return v9;
}
