
idf_component_register(SRCS "subscribe_publish_aws.c" "UsoAws.c" "UsoWifi.c"
INCLUDE_DIRS "."
)




if(CONFIG_EXAMPLE_EMBEDDED_CERTS)
target_add_binary_data(${COMPONENT_TARGET} "certs/aws_root_ca_pem" TEXT)
target_add_binary_data(${COMPONENT_TARGET} "certs/certificate_pem_crt" TEXT)
target_add_binary_data(${COMPONENT_TARGET} "certs/private_pem_key" TEXT)
endif()


