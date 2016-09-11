unsigned int __fastcall sub_80F44B0(int a1, unsigned __int16 a2, int a3, _BYTE *a4)
{
  unsigned int result; // r0@4

  a1 = (unsigned __int16)a1;
  if ( (unsigned __int16)a1 == 14 )
  {
    if ( a3 != 2 && a3 != 7 )
      result = GetMonData((int)&dword_3004360[25 * a2], a3, a2);
    else
      result = GetMonData((int)&dword_3004360[25 * a2], a3, (int)a4);
  }
  else if ( a3 != 2 && a3 != 7 )
  {
    result = GetBoxMonData((unsigned int *)(2400 * a1 + 80 * a2 + 33751204), a3, (_BYTE *)0x20300A4);
  }
  else
  {
    result = GetBoxMonData((unsigned int *)(2400 * a1 + 80 * a2 + 33751204), a3, a4);
  }
  return result;
}
