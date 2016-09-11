signed int __fastcall unref_sub_8125118(_BYTE *a1, int a2)
{
  _BYTE *v2; // r5@1
  int v3; // r6@1
  unsigned int v4; // r7@1
  int v5; // r0@1
  unsigned int v6; // r4@1
  signed int result; // r0@3
  int v8; // r2@4
  int v9; // [sp+0h] [bp-214h]@1

  v2 = a1;
  v3 = a2;
  memset(&v9, 0, 512);
  v4 = *(_BYTE *)(v3 + 5);
  v5 = *(_DWORD *)v3;
  sub_800D238();
  v6 = *v2;
  if ( v6 >= v4 )
  {
_08125186:
    result = 0;
  }
  else
  {
    while ( (signed int)(*v2 + v6) <= 15 )
    {
      *(_DWORD *)&v2[8 * v6 + 8] = *(_DWORD *)v3;
      v8 = (int)&v2[8 * v6];
      *(_BYTE *)(v8 + 12) = v6 + *(_BYTE *)(v3 + 4);
      *(_BYTE *)(v8 + 13) = *v2;
      LoadPalette((int)(&v9 + 8 * v6), 16 * *v2, 32);
      ++*v2;
      v6 = (v6 + 1) & 0xFF;
      if ( v6 >= v4 )
        goto _08125186;
    }
    result = 1;
  }
  return result;
}
