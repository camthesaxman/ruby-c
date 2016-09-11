int __fastcall sub_810EB90(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( a1 )
  {
    sub_810ECB0();
  }
  else
  {
    v203925C ^= 2u;
    SetBgTilemapBuffer(0);
  }
  if ( v2 + v3 >= v203925A )
  {
    if ( v2 + v3 == v203925A )
    {
      v203925C ^= 1u;
      SetBgTilemapBuffer(1u);
    }
  }
  else
  {
    sub_810ECD4(v203925A);
  }
  return v5;
}
