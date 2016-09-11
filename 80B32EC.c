signed int __fastcall sub_80B32EC(int a1, __int16 a2, __int16 a3)
{
  int v3; // r1@1
  signed int result; // r0@1

  v3 = 2 * (a2 + a3) + a1;
  result = 50145;
  *(_WORD *)v3 = -15391;
  *(_WORD *)(v3 + 2) = -15391;
  return result;
}
