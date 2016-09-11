int __fastcall sub_8091154(unsigned __int16 a1, char a2, unsigned __int8 a3)
{
  unsigned __int16 v3; // r0@1
  char v5; // [sp+0h] [bp-18h]@1
  char v6; // [sp+1h] [bp-17h]@1
  char v7; // [sp+2h] [bp-16h]@1
  char v8; // [sp+3h] [bp-15h]@1
  int v9; // [sp+14h] [bp-4h]@1

  v5 = a1 / 0x64u - 95;
  v3 = a1 % 0x64u;
  v6 = v3 / 0xAu - 95;
  v7 = v3 % 0xAu - 95;
  v8 = -1;
  MenuPrint((int)&v5, a2, a3);
  return v9;
}
