int __fastcall sub_8103C14(unsigned __int8 a1)
{
  __int16 v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)CreateTask((int)sub_8103C48, 5);
  HIWORD(dword_3004B20[10 * v2 + 9]) = v1;
  call_via_r5(v2);
  return v4;
}
