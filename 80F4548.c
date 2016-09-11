int __fastcall sub_80F4548(unsigned __int16 a1, unsigned __int16 a2, char a3)
{
  char v4; // [sp+0h] [bp-Ch]@1
  int v5; // [sp+8h] [bp-4h]@4

  v4 = a3;
  if ( a1 == 14 )
    SetMonData((int)&dword_3004360[25 * a2], 8, (int)&v4);
  else
    SetBoxMonData((unsigned int *)(2400 * a1 + 80 * a2 + 33751204), 8, (int)&v4);
  return v5;
}
