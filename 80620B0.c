signed int __fastcall sub_80620B0(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  char v4; // r0@2
  signed int result; // r0@3
  unsigned __int8 v6; // [sp+0h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  if ( !(TryGetFieldObjectIdByLocalIdAndMap(0xFFu, 0, 0, &v6) << 24) )
  {
    v4 = sub_805FE90(
           *(_WORD *)(v2 + 16),
           *(_WORD *)(v2 + 18),
           LOWORD(dword_30048A0[9 * v6 + 4]),
           HIWORD(dword_30048A0[9 * v6 + 4]));
    an_look_any(v2, v3, v4);
  }
  result = 1;
  *(_WORD *)(v3 + 50) = 1;
  return result;
}
