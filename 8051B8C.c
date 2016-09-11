signed int sub_8051B8C()
{
  int v0; // r2@1
  int v1; // r0@3
  int v2; // r1@3
  int v3; // r2@3
  signed int result; // r0@4

  v0 = dword_3004854;
  if ( !*(_DWORD *)(dword_3004854 + 304) )
  {
    *(_WORD *)(dword_3004854 + 324) = 0;
    *(_WORD *)(v0 + 326) = 0;
  }
  v1 = dword_3004854;
  v2 = *(_DWORD *)(dword_3004854 + 304) + 1;
  *(_DWORD *)(dword_3004854 + 304) = v2;
  sub_8051B40((_WORD *)(v1 + 324), v2);
  sub_8051B40((_WORD *)(dword_3004854 + 326), *(_WORD *)(dword_3004854 + 304));
  v3 = dword_3004854;
  if ( *(_DWORD *)(dword_3004854 + 304) == 20 )
  {
    *(_WORD *)(dword_3004854 + 324) = 0;
    *(_WORD *)(v3 + 326) = 0;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
