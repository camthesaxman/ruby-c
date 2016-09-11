int __fastcall sub_8148F3C(unsigned __int8 a1)
{
  int *v1; // r3@1
  int v2; // r2@2
  int v3; // r2@4
  int *v4; // r3@7
  int v5; // r2@8
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 5) << 16 )
  {
    v2 = (LOWORD(dword_3004B20[10 * a1 + 3]) << 16)
       + HIWORD(dword_3004B20[10 * a1 + 3])
       - (16 * HIWORD(dword_3004B20[10 * a1 + 2]) & 0xFFFFF);
    *((_WORD *)v1 + 6) = HIWORD(v2);
    *((_WORD *)v1 + 7) = v2;
    v4000014 = HIWORD(v2);
    v4000016 = v203935A + v2039358;
  }
  if ( LOWORD(dword_3004B20[10 * a1 + 4]) << 16 )
  {
    v3 = (HIWORD(dword_3004B20[10 * a1 + 4]) << 16)
       + LOWORD(dword_3004B20[10 * a1 + 5])
       - (16 * LOWORD(dword_3004B20[10 * a1 + 4]) & 0xFFFFF);
    *((_WORD *)v1 + 9) = HIWORD(v3);
    *((_WORD *)v1 + 10) = v3;
    v4000018 = HIWORD(v3);
    if ( *((_WORD *)v1 + 4) )
      v400001A = v203935A + v2039358;
    else
      v400001A = v2039358;
  }
  v4 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v4 + 11) << 16 )
  {
    v5 = (LOWORD(dword_3004B20[10 * a1 + 6]) << 16)
       + HIWORD(dword_3004B20[10 * a1 + 6])
       - (16 * HIWORD(dword_3004B20[10 * a1 + 5]) & 0xFFFFF);
    *((_WORD *)v4 + 12) = HIWORD(v5);
    *((_WORD *)v4 + 13) = v5;
    v400001C = HIWORD(v5);
    v400001E = v2039358;
  }
  return v7;
}
