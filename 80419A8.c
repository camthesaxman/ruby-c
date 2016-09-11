int __fastcall sub_80419A8(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r8@1
  unsigned int v4; // r5@1
  unsigned int v5; // r5@3
  unsigned int v6; // r5@5
  _BYTE *v7; // r2@6
  unsigned int v8; // r5@7
  unsigned int v9; // r0@8
  char *v10; // r4@11
  int v11; // r0@11
  int v12; // r1@11
  int v14; // [sp+0h] [bp-Ch]@4
  char v15[12]; // [sp+4h] [bp-8h]@2
  char _C[12]; // [sp+Ch] [bp+0h]@6
  char v17; // [sp+10h] [bp+4h]@10
  _BYTE savedregs[28]; // [sp+14h] [bp+8h]@18

  v2 = a1;
  v3 = a2;
  v4 = 0;
  do
  {
    v15[v4] = v4;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 5 );
  v5 = 0;
  do
  {
    *((_BYTE *)&v14 + v5) = v15[(unsigned __int16)Random() % (signed int)(6 - v5)];
    sub_8041960((int)v15, *((_BYTE *)&v14 + v5));
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 2 );
  v6 = 0;
  do
  {
    _C[v6] = Random() & 1;
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 <= 2 );
  v8 = 0;
  do
  {
    v9 = *((_BYTE *)&v14 + v8);
    if ( v9 <= 5 )
    {
      switch ( v9 )
      {
        case 0u:
          v17 = GetBoxMonData((unsigned int *)(80 * (unsigned __int8)_C[v8] + v3), 39, v7);
          SetMonData(v2, 39, (int)&v17);
          break;
        case 1u:
          v10 = &v17;
          v17 = GetBoxMonData((unsigned int *)(80 * (unsigned __int8)_C[v8] + v3), 40, v7);
          v11 = v2;
          v12 = 40;
          goto _08041ADA;
        case 2u:
          v10 = &v17;
          v17 = GetBoxMonData((unsigned int *)(80 * (unsigned __int8)_C[v8] + v3), 41, v7);
          v11 = v2;
          v12 = 41;
          goto _08041ADA;
        case 3u:
          v10 = &v17;
          v17 = GetBoxMonData((unsigned int *)(80 * (unsigned __int8)_C[v8] + v3), 42, v7);
          v11 = v2;
          v12 = 42;
          goto _08041ADA;
        case 4u:
          v10 = &v17;
          v17 = GetBoxMonData((unsigned int *)(80 * (unsigned __int8)_C[v8] + v3), 43, v7);
          v11 = v2;
          v12 = 43;
_08041ADA:
          SetMonData(v11, v12, (int)v10);
          break;
        case 5u:
          v17 = GetBoxMonData((unsigned int *)(80 * (unsigned __int8)_C[v8] + v3), 44, v7);
          SetMonData(v2, 44, (int)&v17);
          break;
        default:
          break;
      }
    }
    v8 = (v8 + 1) & 0xFF;
  }
  while ( v8 <= 2 );
  return *(_DWORD *)&savedregs[24];
}
