int __fastcall ItemUseOutOfBattle_PokeblockCase(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  unsigned int v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  v3 = v1 >> 24;
  if ( (unsigned __int8)sub_80F9344(v1) == 1 )
  {
    DisplayDadsAdviceCannotUseItemMessage(v2, dword_3004B20[10 * v2 + 3]);
  }
  else if ( LOWORD(dword_3004B20[10 * v2 + 3]) == 1 )
  {
    dword_300485C = (int)sub_8080E28;
    sub_810BA7C(1);
    sub_80C9038(v3);
  }
  else
  {
    sub_810BA7C(0);
    unknown_ItemMenu_Confirm(v2);
  }
  return v5;
}
