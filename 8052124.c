int sub_8052124()
{
  unsigned int v0; // r5@1
  _BYTE *v1; // r0@1
  unsigned int v2; // r5@4
  int v3; // r0@4
  int *v4; // r9@5
  _BYTE *v5; // r12@5
  int *v6; // r4@6
  int v7; // r1@6
  int v8; // r1@6
  unsigned int i; // r5@7
  int v11; // [sp+0h] [bp-38h]@2
  int v12; // [sp+4h] [bp-34h]@1
  int *v13; // [sp+14h] [bp-24h]@1
  int v14; // [sp+34h] [bp-4h]@9

  v0 = 0;
  v1 = (_BYTE *)(dword_3004854 + 136);
  v13 = &v12;
  while ( v0 < *v1 )
  {
    *((_BYTE *)&v11 + v0) = v0;
    v0 = (v0 + 1) & 0xFF;
    v1 = (_BYTE *)(dword_3004854 + 136);
  }
  v2 = 0;
  v3 = dword_3004854;
  if ( (unsigned int)*(_BYTE *)(dword_3004854 + 136) > 0 )
  {
    v4 = v13;
    v5 = (_BYTE *)(dword_3004854 + 136);
    do
    {
      v6 = &v4[v2];
      v7 = 1000000 * *(_WORD *)(v3 + 332 + 6 * v2);
      *v6 = v7;
      v8 = v7 + 1000 * *(_WORD *)(v3 + 334 + 6 * v2);
      *v6 = v8;
      *v6 = v8 + 1000 - *(_WORD *)(v3 + 336 + 6 * v2);
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 < *v5 );
  }
  sub_80520CC((int)&v11, *(_BYTE *)(dword_3004854 + 136), (int)v13);
  for ( i = 0; i < *(_BYTE *)(dword_3004854 + 136); i = (i + 1) & 0xFF )
    *(_BYTE *)(dword_3004854 + 356 + i) = *((_BYTE *)&v11 + i);
  return v14;
}
