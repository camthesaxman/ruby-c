signed int __fastcall sub_80C4FBC(int a1, int a2, int a3)
{
  int v3; // r0@1
  signed int result; // r0@5
  char v5; // [sp+0h] [bp-14h]@1

  v3 = (unsigned __int8)GetMonData((int)&dword_3004360[25 * v2038694], 70, a3);
  v5 = v3;
  if ( v3
    || *(_BYTE *)(v2038695 + 0x2038690)
    || v203869E != 3
    || (signed int)*(_WORD *)(2 * v2038695 + 0x2038678) <= 799 )
  {
    result = 0;
  }
  else
  {
    v5 = 1;
    SetMonData((int)&dword_3004360[25 * v2038694], 70, (int)&v5);
    result = 1;
  }
  return result;
}
