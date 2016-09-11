int sub_807EFC0()
{
  signed __int16 v0; // r0@3
  int v1; // r0@11
  int v2; // r0@20
  int v3; // r0@21
  int v4; // r0@25
  int v5; // r0@28
  int v6; // r0@30
  int v8; // [sp+8h] [bp-4h]@0

  sub_807F434();
  if ( v202FEB4 <= 0xEu )
  {
    switch ( v202FEB4 )
    {
      case 0u:
        sub_807E7A4();
        v0 = v202FEB4 + 1;
        goto _0807F334;
      case 1u:
        if ( sub_807E7B4() << 24 )
          return v8;
        v0 = v202FEB4 + 1;
        goto _0807F334;
      case 2u:
        if ( sub_807E8E8() << 24 )
          return v8;
        v202FEBA = 1;
        v0 = v202FEB4 + 1;
        goto _0807F334;
      case 3u:
        if ( !v202FEAE )
          return v8;
        v0 = 6;
        goto _0807F334;
      case 4u:
        v202FED2 = 1;
        v202FECE = (unsigned __int16)Random() % 0x168u + 360;
        ++v202FEB4;
        goto _0807F0EC;
      case 5u:
_0807F0EC:
        v1 = v202FECE - 1;
        --v202FECE;
        if ( v1 << 16 )
          return v8;
        v0 = v202FEB4 + 1;
        goto _0807F334;
      case 6u:
        v202FED2 = 1;
        v202FED3 = Random() & 1;
        goto _0807F1A4;
      case 7u:
        v202FED4 = (Random() & 1) + 1;
        ++v202FEB4;
        goto _0807F166;
      case 8u:
_0807F166:
        sub_807D5BC(19);
        if ( !v202FED3 && v202FED4 == 1 )
          sub_807F3F8(20);
        v202FECE = (unsigned __int16)Random() % 3u + 6;
_0807F1A4:
        ++v202FEB4;
        return v8;
      case 9u:
        v2 = v202FECE - 1;
        --v202FECE;
        if ( v2 << 16 )
          return v8;
        sub_807D5BC(3);
        v202FED2 = 1;
        v3 = v202FED4 - 1;
        --v202FED4;
        if ( v3 << 24 )
        {
          v202FECE = (Random() & 0xF) + 60;
          v0 = 10;
        }
        else if ( v202FED3 )
        {
          v0 = 11;
        }
        else
        {
_0807F332:
          v0 = 4;
        }
_0807F334:
        v202FEB4 = v0;
        break;
      case 0xAu:
        v4 = v202FECE - 1;
        --v202FECE;
        if ( v4 << 16 )
          return v8;
        v0 = 8;
        goto _0807F334;
      case 0xBu:
        v202FECE = (Random() & 0xF) + 60;
        ++v202FEB4;
        return v8;
      case 0xCu:
        v5 = v202FECE - 1;
        --v202FECE;
        if ( v5 << 16 )
          return v8;
        sub_807F3F8(100);
        sub_807D5BC(19);
        v202FECE = (Random() & 0xF) + 30;
        v0 = v202FEB4 + 1;
        goto _0807F334;
      case 0xDu:
        v6 = v202FECE - 1;
        --v202FECE;
        if ( v6 << 16 )
          return v8;
        sub_807D5F0(19, 3, 5);
        v0 = v202FEB4 + 1;
        goto _0807F334;
      case 0xEu:
        if ( v202FEAE != 3 )
          return v8;
        v202FED2 = 1;
        goto _0807F332;
      default:
        return v8;
    }
  }
  return v8;
}
