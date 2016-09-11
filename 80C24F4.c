int __fastcall sub_80C24F4(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    if ( v203869A & 1 )
    {
      sub_80C3698("Æİâß");
      dword_3004B20[10 * v1] = (int)sub_80C255C;
    }
    else
    {
      dword_3004B20[10 * a1] = (int)sub_80C2600;
    }
  }
  return v3;
}
