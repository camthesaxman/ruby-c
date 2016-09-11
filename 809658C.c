int sub_809658C()
{
  unsigned int v0; // r5@3
  int v1; // r0@4
  unsigned int v2; // r5@7
  int v3; // r0@8
  int v5; // [sp+Ch] [bp-4h]@0

  if ( *v2038478 )
  {
    DestroySprite(*v2038478);
    *v2038478 = 0;
  }
  v0 = 0;
  do
  {
    v1 = *(_DWORD *)(v2038478 + 4 + 4 * v0);
    if ( v1 )
    {
      DestroySprite(v1);
      *(_DWORD *)(v2038478 + 4 + 4 * v0) = 0;
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 3 );
  v2 = 0;
  do
  {
    v3 = *(_DWORD *)(v2038478 + 32 + 4 * v2);
    if ( v3 )
      DestroySprite(v3);
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 1 );
  return v5;
}
