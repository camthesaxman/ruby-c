int __fastcall dp01_prepare_buffer(unsigned __int8 a1, _BYTE *a2, int a3)
{
  _BYTE *v3; // r4@1
  int j; // r3@6
  int i; // r3@9
  int v7; // [sp+Ch] [bp-4h]@0

  v3 = a2;
  a3 = (unsigned __int16)a3;
  if ( v20239F8 & 2 )
  {
    dp01_prepare_buffer_wireless_probably(a1, a3, a2);
  }
  else if ( a1 )
  {
    if ( a1 == 1 )
    {
      for ( i = 0; i < a3; ++i )
        *(_BYTE *)(i + (v2024A60 << 9) + 33702496) = *v3++;
    }
  }
  else
  {
    for ( j = 0; j < a3; ++j )
      *(_BYTE *)(j + (v2024A60 << 9) + 33700448) = *v3++;
  }
  return v7;
}
