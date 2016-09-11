int __fastcall sub_804A2B4(int a1, int a2, int a3)
{
  int v3; // r5@1
  unsigned int *v4; // r4@2
  int v5; // r2@2
  char *v6; // r4@3
  int v7; // r2@3
  int v9; // [sp+0h] [bp-18h]@2

  v3 = a1;
  a3 = (unsigned __int8)a3;
  if ( a2 << 24 )
  {
    v6 = (char *)&unk_30045C0 + 100 * a3;
    GetMonData((int)v6, 2, (int)&v9);
    StringCopy10(v3, (int)&v9);
    GetMonGender();
    GetMonData((int)v6, 56, v7);
  }
  else
  {
    v4 = &dword_3004360[25 * a3];
    GetMonData((int)v4, 2, (int)&v9);
    StringCopy10(v3, (int)&v9);
    GetMonGender();
    GetMonData((int)v4, 56, v5);
  }
  return (unsigned __int8)GetStringWidthGivenWindowConfig((int)&gWindowConfig_81E7294, v3);
}
