int __fastcall sub_80BACDC(char a1)
{
  char v1; // r4@1
  int v3; // [sp+0h] [bp-50h]@1
  int v4; // [sp+4Ch] [bp-4h]@5

  v1 = a1;
  memcpy(&v3, (const char *)&gUnknown_083D039C, 64);
  *(_DWORD *)(4 * v20387B3 + 0x20387B4) += v1;
  if ( *(_DWORD *)(4 * v20387B3 + 0x20387B4) > *(&v3 + 2 * v20387B3 + 1) )
    *(_DWORD *)(4 * v20387B3 + 0x20387B4) = *(&v3 + 2 * v20387B3);
  if ( *(_DWORD *)(4 * v20387B3 + 0x20387B4) < *(&v3 + 2 * v20387B3) )
    *(_DWORD *)(4 * v20387B3 + 0x20387B4) = *(&v3 + 2 * v20387B3 + 1);
  return v4;
}
