int __fastcall sub_8003490(int a1, char a2, __int16 a3, char a4, unsigned __int8 a5)
{
  int v5; // r5@1
  int v6; // r4@1
  char v8; // [sp+4h] [bp-10h]@1
  char v9; // [sp+5h] [bp-Fh]@1

  v5 = a1;
  v8 = a2;
  v9 = -1;
  InitWindow(a1, (int)&v8, a3, a4, a5);
  v6 = (unsigned __int8)InterpretText(v5);
  ClipRight(v5);
  return v6;
}
