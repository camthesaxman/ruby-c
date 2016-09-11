int __fastcall CreateMonWithNature(int a1, unsigned __int16 a2, unsigned __int8 a3, unsigned __int8 a4, int a5)
{
  int v5; // r9@1
  unsigned __int16 v6; // r8@1
  unsigned __int8 v7; // r7@1
  unsigned __int8 v8; // r6@1
  int v9; // r0@1
  int v10; // r0@2
  int v11; // r4@2
  int v13; // [sp+28h] [bp-4h]@0

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = a5 << 24;
  do
  {
    v10 = Random(v9);
    v11 = (unsigned __int16)v10 | (Random(v10) << 16);
    v9 = (unsigned __int8)GetNatureFromPersonality(v11);
  }
  while ( (unsigned __int8)a5 != v9 );
  CreateMon(v5, v6, v7, v8);
  return v13;
}
