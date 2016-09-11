int __fastcall sub_80C9154(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+0h] [bp-2Ch]@2
  __int16 v4; // [sp+20h] [bp-Ch]@2
  int v5; // [sp+28h] [bp-4h]@3

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v4 = v203855E;
    sub_80F890C(&v3, sub_80A5D04, 0);
    DestroyTask(v1);
  }
  return v5;
}
