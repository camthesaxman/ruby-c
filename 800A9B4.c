int __fastcall Task_800A9B4(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( MenuUpdateWindowText_OverrideLineLength(24) << 24 )
  {
    CreateNameMenu(2, 1);
    dword_3004B20[10 * v1] = (int)sub_800A9EC;
  }
  return v3;
}
