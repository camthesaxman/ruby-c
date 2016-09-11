int __fastcall sub_8081EF4(unsigned __int8 a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r7@1
  signed int v5; // r6@1
  int v6; // r1@2

  v3 = a1;
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = GetMonData((int)&dword_3004360[25 * v5], 65, a3);
    if ( v6 != 412 )
    {
      if ( v6 )
      {
        if ( GetMonData((int)&dword_3004360[25 * v5], 57, a3) )
        {
          v4 = (v4 + GetMonData((int)&dword_3004360[25 * v5], 56, a3)) & 0xFF;
          v3 = (v3 - 1) & 0xFF;
          if ( !v3 )
            break;
        }
      }
    }
    ++v5;
  }
  while ( v5 <= 5 );
  return v4;
}
