int sub_810993C()
{
  int v0; // r2@1
  unsigned int v1; // r5@2
  _BYTE *v2; // r6@3
  _BYTE *v3; // r7@3
  int v5; // [sp+0h] [bp-30h]@5
  int v6; // [sp+Ch] [bp-24h]@2
  int v7; // [sp+2Ch] [bp-4h]@8

  v0 = 0;
  do
  {
    v1 = (v0 + 1) & 0xFF;
    v6 = v0 + 1;
    if ( v1 <= 3 )
    {
      v2 = (_BYTE *)(v0 + 33719497);
      v3 = (_BYTE *)(11 * v0 + 33719501);
      do
      {
        if ( !*v2 )
        {
          *v2 = *(_BYTE *)(v1 + 33719497);
          *(_BYTE *)(v1 + 33719497) = 0;
          StringCopy(&v5, v3);
          StringCopy(v3, (_BYTE *)(11 * v1 + 33719501));
          StringCopy((_BYTE *)(11 * v1 + 33719501), &v5);
        }
        v1 = (v1 + 1) & 0xFF;
      }
      while ( v1 <= 3 );
    }
    v0 = (unsigned __int8)v6;
  }
  while ( (unsigned __int8)v6 <= 2u );
  return v7;
}
