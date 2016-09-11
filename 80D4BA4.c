int __fastcall sub_80D4BA4(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@2
  int *v3; // r2@3
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( sub_8078718(a1) << 24 )
  {
    v2 = 0;
    do
    {
      v3 = &dword_3004B20[10 * v2];
      if ( (int (__fastcall *)(unsigned __int8))*v3 == sub_80D4988 )
      {
        *((_WORD *)v3 + 14) = 1;
        --*((_WORD *)v3 + 12);
        DestroySprite(v1);
      }
      v2 = (v2 + 1) & 0xFFFF;
    }
    while ( v2 <= 0xF );
  }
  return v5;
}
