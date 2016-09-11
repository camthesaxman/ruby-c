int __fastcall StartFishing(unsigned __int8 a1)
{
  int v2; // [sp+8h] [bp-4h]@0

  HIWORD(dword_3004B20[10 * (unsigned __int8)CreateTask(sub_805A37C, 255) + 9]) = a1;
  call_via_r5();
  return v2;
}
