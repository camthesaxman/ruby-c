int __fastcall sub_80AB604(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( v203869A & 1 )
  {
    if ( !(v202F38F & 0x80) )
    {
      v202F390 &= 0x7Fu;
      sub_80AF860();
      CreateTask((int)sub_80AB678, 0);
      dword_3004B20[10 * v1] = (int)nullsub_89;
    }
  }
  else
  {
    dword_3004B20[10 * a1] = (int)sub_80AB960;
  }
  return v3;
}
