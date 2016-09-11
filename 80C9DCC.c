int __fastcall ItemUseOutOfBattle_SacredAsh(unsigned __int8 a1, int a2, int a3)
{
  unsigned __int8 v3; // r6@1
  unsigned int i; // r5@1
  int v6; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  byte_3005CE0 = 0;
  for ( i = 0; i <= 5; i = (i + 1) & 0xFF )
  {
    if ( GetMonData((int)&dword_3004360[25 * i], 11, a3) && !GetMonData((int)&dword_3004360[25 * i], 57, a3) )
    {
      byte_3005CE0 = i;
      break;
    }
  }
  dword_3004AE4 = (int)sub_8070048;
  v2038561 = 4;
  unknown_ItemMenu_Confirm(v3);
  return v6;
}
