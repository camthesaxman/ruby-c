int __fastcall pokemon_get_nick(int a1, int a2)
{
  int v2; // r4@1
  int v4; // [sp+0h] [bp-1Ch]@1

  v2 = a2;
  GetMonData(a1, 2, (int)&v4);
  return StringCopy10(v2, (int)&v4);
}
