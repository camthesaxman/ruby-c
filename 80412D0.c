int __fastcall pokemon_get_nick_(unsigned int *a1, int a2)
{
  int v2; // r4@1
  int v4; // [sp+0h] [bp-1Ch]@1

  v2 = a2;
  GetBoxMonData(a1, 2, &v4);
  return StringCopy10(v2, (int)&v4);
}
