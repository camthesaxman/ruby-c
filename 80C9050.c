int __fastcall SetUpItemUseOnFieldCallback(unsigned __int8 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( LOWORD(dword_3004B20[10 * a1 + 3]) == 1 )
  {
    call_via_r1(a1, dword_3005D00);
  }
  else
  {
    dword_300485C = (int)sub_80A5CC4;
    unknown_ItemMenu_Confirm(a1);
  }
  return v2;
}
