signed int __fastcall sub_806210C(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  unsigned __int8 v4; // r0@2
  char v5; // r0@2
  signed int result; // r0@3
  unsigned __int8 v7; // [sp+0h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  if ( !(TryGetFieldObjectIdByLocalIdAndMap(0xFFu, 0, 0, &v7) << 24) )
  {
    v4 = sub_805FE90(
           *(_WORD *)(v2 + 16),
           *(_WORD *)(v2 + 18),
           LOWORD(dword_30048A0[9 * v7 + 4]),
           HIWORD(dword_30048A0[9 * v7 + 4]));
    v5 = GetOppositeDirection(v4);
    an_look_any(v2, v3, v5);
  }
  result = 1;
  *(_WORD *)(v3 + 50) = 1;
  return result;
}
