int __fastcall sub_8120F98(_BYTE *a1)
{
  _BYTE *v1; // r4@1
  int *v2; // r2@1
  unsigned int v3; // r3@1
  unsigned int v4; // r3@4
  int *v5; // r2@4
  int v7; // [sp+0h] [bp-14h]@1
  int v8; // [sp+4h] [bp-10h]@6

  v1 = a1;
  memcpy(&v7, (const char *)&gUnknown_084017A8, 8);
  v2 = &v7;
  v3 = 0;
  do
  {
    if ( *v1 == 255 )
      break;
    *(_BYTE *)v2 = *v1++;
    v2 = (int *)((char *)v2 + 1);
    ++v3;
  }
  while ( v3 <= 7 );
  v4 = 0;
  v5 = &gUnknown_081FA6D4;
  do
  {
    if ( v7 == *(_DWORD *)*v5 && v8 == *(_DWORD *)(*v5 + 4) )
      return v5[1];
    v5 += 2;
    ++v4;
  }
  while ( v4 <= 6 );
  return 0;
}
