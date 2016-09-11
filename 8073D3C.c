int __fastcall unref_sub_8073D3C(int a1, char a2, unsigned __int8 a3, unsigned __int8 a4, __int16 a5)
{
  int v5; // r8@1
  char v6; // r4@1
  unsigned __int8 v7; // r6@1
  unsigned __int8 v8; // ST04_1@1

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  ReadPlttIntoBuffers();
  return (unsigned __int8)BeginNormalPaletteFade(v5, v6, v7, v8, a5);
}
