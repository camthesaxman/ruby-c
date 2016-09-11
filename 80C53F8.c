int __fastcall sub_80C53F8(unsigned __int16 a1)
{
  int v2; // [sp+0h] [bp-6Ch]@1
  char v3; // [sp+64h] [bp-8h]@1

  sub_8042044((int)&v2, a1, 1u);
  v3 = 1;
  SetMonData((int)&v2, 45, (int)&v3);
  return (unsigned __int8)pokemon_catch((int)&v2);
}
